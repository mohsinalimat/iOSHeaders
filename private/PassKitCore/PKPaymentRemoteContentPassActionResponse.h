//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class PKPaymentPassAction;

@interface PKPaymentRemoteContentPassActionResponse : PKPaymentWebServiceResponse
{
    PKPaymentPassAction *_updatedAction;
}

@property(retain, nonatomic) PKPaymentPassAction *updatedAction; // @synthesize updatedAction=_updatedAction;
- (void).cxx_destruct;
- (id)initWithExistingAction:(id)arg1 data:(id)arg2;

@end

