//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class WBSFormAutoFillCorrectionSet;
@protocol WBSFormAutoFillFeedbackDomainPolicyProvider;

@protocol WBSFormAutoFillFeedbackProcessor <NSObject>
@property(retain, nonatomic) id <WBSFormAutoFillFeedbackDomainPolicyProvider> domainPolicyProvider;
- (void)sendFeedbackWithCorrectionSet:(WBSFormAutoFillCorrectionSet *)arg1;
@end

