//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoAnalysis/NSObject-Protocol.h>

@class PHAActivityGovernor;

@protocol PHAActivityGovernorDelegate <NSObject>
- (void)governorDidRevokeForegroundAccess:(PHAActivityGovernor *)arg1;
- (void)governorDidGrantForegroundAccess:(PHAActivityGovernor *)arg1;
- (void)governorDidRevokeBackgroundAccess:(PHAActivityGovernor *)arg1;
- (void)governorDidGrantBackgroundAccess:(PHAActivityGovernor *)arg1;
@end

