//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SoftwareUpdateServices/NSObject-Protocol.h>

@class NSString;

@protocol SUAutoInstallOperationClientHandler <NSObject>
- (void)_noteAutoInstallOperationIsReadyToInstall:(void (^)(_Bool, NSError *))arg1;
- (void)_noteAutoInstallOperationDidConsent;
- (void)_noteAutoInstallOperationDidExpire;
- (void)_noteAutoInstallOperationWasCancelled;
- (NSString *)uniqueIdentifier;
@end

