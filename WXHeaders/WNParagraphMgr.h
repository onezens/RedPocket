//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WNParagraphParser;

@interface WNParagraphMgr : NSObject
{
    WNParagraphParser *m_parser;
    _Bool bHtmlDownloaded;
    NSString *originHtmlStr;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bHtmlDownloaded; // @synthesize bHtmlDownloaded;
- (void)calculateParaInfoHeight:(id)arg1;
- (void)cutLongTextParagraph:(id)arg1;
- (id)cutSingleLongTextParagraph:(id)arg1;
- (void)exportParagraph:(id)arg1 toFileFavData:(id)arg2;
- (void)exportParagraph:(id)arg1 toImageFavData:(id)arg2;
- (void)exportParagraph:(id)arg1 toLocationFavData:(id)arg2;
- (void)exportParagraph:(id)arg1 toTextFavData:(id)arg2;
- (void)exportParagraph:(id)arg1 toVideoFavData:(id)arg2;
- (void)exportParagraph:(id)arg1 toVoiceFavData:(id)arg2;
- (void)exportParagraphs:(id)arg1 toHtml:(id)arg2 toDataList:(id)arg3;
- (id)exportParagraphsToHtml:(id)arg1;
- (id)genArticleDesc:(id)arg1;
- (id)getMergeTextParagraphs:(id)arg1;
- (unsigned int)getVoiceFmt:(id)arg1;
- (id)getVoiceFmtOfString:(unsigned int)arg1;
- (id)init;
- (_Bool)loadHtmlPath:(id)arg1 toParagraph:(id)arg2;
@property(retain, nonatomic) NSString *originHtmlStr; // @synthesize originHtmlStr;
- (_Bool)parseFavItem:(id)arg1 FromHtml:(id)arg2 toParagraphs:(id)arg3;
- (void)parseFavItem:(id)arg1 toParagraphs:(id)arg2 originMessage:(id)arg3;
- (void)parseFavItemFromDataList:(id)arg1 toParagraphs:(id)arg2;
- (_Bool)parseParagraph:(id)arg1 FromFileData:(id)arg2;
- (_Bool)parseParagraph:(id)arg1 FromImageData:(id)arg2;
- (_Bool)parseParagraph:(id)arg1 FromLocationData:(id)arg2;
- (_Bool)parseParagraph:(id)arg1 FromTextData:(id)arg2;
- (_Bool)parseParagraph:(id)arg1 FromVideoData:(id)arg2;
- (_Bool)parseParagraph:(id)arg1 FromVoiceData:(id)arg2;
- (void)tagLastTextParagraph:(id)arg1;
- (void)tagTextParagraphBeforeObject:(id)arg1;

@end

