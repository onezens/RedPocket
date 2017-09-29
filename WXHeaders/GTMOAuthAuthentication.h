//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface GTMOAuthAuthentication : NSObject
{
    NSMutableDictionary *paramValues_;
    NSString *realm_;
    NSString *privateKey_;
    NSString *timestamp_;
    NSString *nonce_;
    _Bool hasAccessToken_;
    _Bool shouldUseParamsToAuthorize_;
    id userData_;
}

+ (id)HMACSHA1HashForConsumerSecret:(id)arg1 tokenSecret:(id)arg2 body:(id)arg3;
+ (void)addBodyFromRequest:(id)arg1 toParams:(id)arg2;
+ (void)addQueryFromRequest:(id)arg1 toParams:(id)arg2;
+ (void)addQueryString:(id)arg1 toParams:(id)arg2;
+ (id)authForInstalledApp;
+ (id)dictionaryWithResponseData:(id)arg1;
+ (id)dictionaryWithResponseString:(id)arg1;
+ (id)encodedOAuthParameterForString:(id)arg1;
+ (id)normalizeQueryString:(id)arg1;
+ (id)paramStringForParams:(id)arg1 joiner:(id)arg2 shouldQuote:(_Bool)arg3 shouldSort:(_Bool)arg4;
+ (id)scopeWithStrings:(id)arg1;
+ (id)stringWithBase64ForData:(id)arg1;
+ (id)tokenAccessKeys;
+ (id)tokenAuthorizeKeys;
+ (id)tokenRequestKeys;
+ (id)tokenResourceKeys;
+ (id)unencodedOAuthParameterForString:(id)arg1;
@property(copy, nonatomic) NSString *accessToken;
- (void)addAccessTokenHeaderToRequest:(id)arg1;
- (void)addAccessTokenParamsToRequest:(id)arg1;
- (void)addAuthorizationHeaderToRequest:(id)arg1 forKeys:(id)arg2;
- (void)addAuthorizeTokenHeaderToRequest:(id)arg1;
- (void)addAuthorizeTokenParamsToRequest:(id)arg1;
- (void)addParams:(id)arg1 toRequest:(id)arg2;
- (void)addParamsForKeys:(id)arg1 toRequest:(id)arg2;
- (void)addRequestTokenHeaderToRequest:(id)arg1;
- (void)addRequestTokenParamsToRequest:(id)arg1;
- (void)addResourceTokenHeaderToRequest:(id)arg1;
- (void)addResourceTokenParamsToRequest:(id)arg1;
- (_Bool)authorizeRequest:(id)arg1;
- (void)authorizeRequest:(id)arg1 delegate:(id)arg2 didFinishSelector:(SEL)arg3;
@property(copy, nonatomic) NSString *callback;
@property(copy, nonatomic) NSString *callbackConfirmed;
@property(readonly, nonatomic) _Bool canAuthorize;
@property(copy, nonatomic) NSString *consumerKey;
- (void)dealloc;
@property(copy, nonatomic) NSString *displayName;
@property(copy, nonatomic) NSString *domain;
- (_Bool)hasAccessToken;
@property(copy, nonatomic) NSString *hostedDomain;
@property(copy, nonatomic) NSString *iconURLString;
- (id)initWithSignatureMethod:(id)arg1 consumerKey:(id)arg2 privateKey:(id)arg3;
- (_Bool)isAuthorizedRequest:(id)arg1;
- (_Bool)isAuthorizingRequest:(id)arg1;
@property(copy, nonatomic) NSString *language;
@property(copy, nonatomic) NSString *mobile;
@property(copy, nonatomic) NSString *nonce;
- (id)normalizedRequestURLStringForRequest:(id)arg1;
- (id)paramsForKeys:(id)arg1 request:(id)arg2;
- (id)persistenceResponseString;
@property(copy, nonatomic) NSString *privateKey; // @synthesize privateKey=privateKey_;
@property(copy, nonatomic) NSString *realm; // @synthesize realm=realm_;
- (void)reset;
@property(copy, nonatomic) NSString *scope;
@property(copy, nonatomic) NSString *serviceProvider;
- (void)setHasAccessToken:(_Bool)arg1;
- (void)setKeysForPersistenceResponseString:(id)arg1;
- (void)setKeysForResponseData:(id)arg1;
- (void)setKeysForResponseDictionary:(id)arg1;
- (void)setKeysForResponseString:(id)arg1;
@property(nonatomic) _Bool shouldUseParamsToAuthorize; // @synthesize shouldUseParamsToAuthorize=shouldUseParamsToAuthorize_;
@property(copy, nonatomic) NSString *signatureMethod;
@property(copy, nonatomic) NSString *timestamp;
@property(copy, nonatomic) NSString *token;
@property(copy, nonatomic) NSString *tokenSecret;
@property(retain, nonatomic) id userData; // @synthesize userData=userData_;
@property(copy, nonatomic) NSString *userEmail;
@property(copy, nonatomic) NSString *userEmailIsVerified;
@property(copy, nonatomic) NSString *verifier;
@property(copy, nonatomic) NSString *version;
- (id)signatureForParams:(id)arg1 request:(id)arg2;
- (void)stopAuthorization;

@end

