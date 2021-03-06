//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CTCellularPlanJsonResponseParser : NSObject
{
}

+ (_Bool)parseResponseJson:(id)arg1 setUrl:(id *)arg2 setParameters:(id *)arg3;
+ (_Bool)parseCountryListResponseData:(id)arg1 intoSupportedCountryList:(id *)arg2 intoUnsupportedCountryList:(id *)arg3 error:(id *)arg4;
+ (_Bool)parseSubscriptionsResponseData:(id)arg1 intoSubscriptions:(id *)arg2 error:(id *)arg3;
+ (_Bool)parsePurchaseResponseData:(id)arg1 intoShouldDownloadProfile:(_Bool *)arg2 iccid:(id *)arg3 responseCode:(int *)arg4 responseText:(id *)arg5 error:(id *)arg6;
+ (_Bool)parseInitiatePurchaseResponseData:(id)arg1 intoShouldPurchase:(_Bool *)arg2 responseCode:(int *)arg3 responseText:(id *)arg4 buddyML:(id *)arg5 error:(id *)arg6;
+ (_Bool)parseHandoffTokenResponseData:(id)arg1 intoHandoffToken:(id *)arg2 error:(id *)arg3;
+ (_Bool)parseCreateSessionResponseData:(id)arg1 intoSessionId:(id *)arg2 podId:(id *)arg3 urls:(id *)arg4 error:(id *)arg5;
+ (id)sessionIdFromJsonData:(id)arg1;
+ (id)sessionIdFromObject:(id)arg1;

@end

