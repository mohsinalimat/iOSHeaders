//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray, NSURL;

@interface PKPaymentProvisioningResponse : PKPaymentWebServiceResponse
{
    _Bool _willProvisionWithAuthenticationDisabled;
    NSURL *_passURL;
    NSArray *_moreInfoURLs;
}

@property(readonly, nonatomic) _Bool willProvisionWithAuthenticationDisabled; // @synthesize willProvisionWithAuthenticationDisabled=_willProvisionWithAuthenticationDisabled;
@property(readonly, copy, nonatomic) NSArray *moreInfoURLs; // @synthesize moreInfoURLs=_moreInfoURLs;
@property(copy, nonatomic) NSURL *passURL; // @synthesize passURL=_passURL;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

