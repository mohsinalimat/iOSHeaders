//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CommunicationsSetupUI/NSObject-Protocol.h>

@class CNFRegChangeAccountPasswordController, NSString;

@protocol CNFRegChangeAccountPasswordDelegate <NSObject>
- (void)changePasswordControllerDidFinish:(CNFRegChangeAccountPasswordController *)arg1 withAppleID:(NSString *)arg2 authID:(NSString *)arg3 authToken:(NSString *)arg4;
- (void)changePasswordControllerDidCancel:(CNFRegChangeAccountPasswordController *)arg1;
@end

