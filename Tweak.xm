
@interface WCBizUtil 
+ (id)dictionaryWithDecodedComponets:(id)arg1 separator:(id)arg2;
@end

@interface SKBuiltinBuffer_t 

+ (id)skBufferWithData:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSData *buffer; // @dynamic buffer;
@property(nonatomic) unsigned int iLen; // @dynamic iLen;

@end

@interface HongBaoReq 

@property(retain, nonatomic) SKBuiltinBuffer_t *reqText; // @dynamic reqText;
@property(nonatomic) unsigned int cgiCmd; // @dynamic cgiCmd;
@property(nonatomic) unsigned int outPutType; // @dynamic outPutType;



@end

@interface HongBaoRes 

@property(retain, nonatomic) SKBuiltinBuffer_t *retText; // @dynamic reqText;
@property(nonatomic) unsigned int cgiCmdid; // @dynamic cgiCmd;
@property(retain, nonatomic) NSString *platMsg; // @dynamic platMsg;
@property(nonatomic) int platRet; // @dynamic platRet;

@end


%hook WCRedEnvelopesLogicMgr
- (void)OnWCToHongbaoCommonResponse:(HongBaoRes *)arg1 Request:(HongBaoReq *)arg2 {
    %log; 
    %orig;
    NSLog(@"HongBaoRes --->  cgiCmdid: %d  platRet: %d  retText: %@ platMsg : %@ ",arg1.cgiCmdid, arg1.platRet, arg1.retText, arg1.platMsg);

    NSLog(@"HongBaoReq --->  cgiCmdid: %d  outPutType : %d  reqText: %@ ",arg2.cgiCmd, arg2.outPutType, arg2.reqText);

    NSLog(@"HongBaoRes buffer: %@", [[NSString alloc] initWithData:arg1.retText.buffer encoding:NSUTF8StringEncoding]);
    NSLog(@"HongBaoReq buffer:  %@", [[NSString alloc] initWithData:arg2.reqText.buffer encoding:NSUTF8StringEncoding]);

    if (arg1.retText.buffer.length>0)
    {
        NSLog(@"arg1.retText.buffer:\n");
        
        NSDictionary *retTextObj =  [NSJSONSerialization JSONObjectWithData:arg1.retText.buffer options:0 error:nil];
        NSLog(@"%@", retTextObj);
        NSString *retTextStr = [[NSString alloc] initWithData:arg1.retText.buffer encoding:NSUTF8StringEncoding];
        // NSDictionary *retTextDict = [%c(WCBizUtil) dictionaryWithDecodedComponets:retTextStr separator:@"&"];
        NSLog(@"retTextDict: %@",retTextDict);
    }

    if (arg2.reqText.buffer.length>0)
    {
        NSLog(@"arg2.reqText.buffer :\n");
        NSString *reqTextStr = [[NSString alloc] initWithData:arg2.reqText.buffer encoding:NSUTF8StringEncoding];
        NSDictionary *reqTextDict = [%c(WCBizUtil) dictionaryWithDecodedComponets:reqTextStr separator:@"&"];
        NSLog(@"reqTextDict: %@",reqTextDict);
    }

}
// - (void)ReceiverQueryRedEnvelopesRequest:(id)arg1 { 
//     %log; %orig; 

// }
- (void)GetHongbaoBusinessRequest:(id)arg1 CMDID:(unsigned int)arg2 OutputType:(unsigned int)arg3 { %log; %orig; }



%end



%hook WCRedEnvelopesReceiveControlLogic

- (void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes{
    %log;
    %orig;
}

%end