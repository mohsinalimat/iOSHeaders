//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BackBoardServices/NSObject-Protocol.h>

@class BKSProcessExitContext, NSError, NSString;

@protocol BKSAlternateSystemAppClientProtocol <NSObject>
- (void)alternateSystemAppWithBundleIDDidTerminate:(NSString *)arg1;
- (void)alternateSystemAppWithBundleIDDidOpen:(NSString *)arg1;
- (void)alternateSystemAppWithBundleID:(NSString *)arg1 didExitWithContext:(BKSProcessExitContext *)arg2;
- (void)alternateSystemAppWithBundleID:(NSString *)arg1 failedToOpenWithResult:(NSError *)arg2;
- (void)didUnblockSystemAppForAlternateSystemApp;
- (void)didBlockSystemAppForAlternateSystemApp;
@end

