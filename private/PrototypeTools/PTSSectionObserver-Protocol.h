//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PrototypeTools/NSObject-Protocol.h>

@class NSIndexSet, PTSSection;

@protocol PTSSectionObserver <NSObject>
- (void)sectionDidReload:(PTSSection *)arg1;
- (void)section:(PTSSection *)arg1 didInsertRows:(NSIndexSet *)arg2 deleteRows:(NSIndexSet *)arg3;
@end

