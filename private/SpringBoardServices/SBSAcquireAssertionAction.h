//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/BSAction.h>

@class NSString;

@interface SBSAcquireAssertionAction : BSAction
{
}

+ (id)assertionWithAssertionName:(id)arg1 reason:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned int port;
@property(readonly, nonatomic) __weak NSString *reason;
@property(readonly, nonatomic) __weak NSString *assertionName;

@end

