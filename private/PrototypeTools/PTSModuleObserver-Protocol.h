//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PrototypeTools/NSObject-Protocol.h>

@class NSArray, NSIndexSet, PTSModule;

@protocol PTSModuleObserver <NSObject>
- (void)moduleDidReload:(PTSModule *)arg1;
- (void)module:(PTSModule *)arg1 didInsertRows:(NSArray *)arg2 deleteRows:(NSArray *)arg3;
- (void)module:(PTSModule *)arg1 didInsertSections:(NSIndexSet *)arg2 deleteSections:(NSIndexSet *)arg3;
@end

