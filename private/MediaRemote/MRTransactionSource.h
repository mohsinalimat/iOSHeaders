//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MRTransactionSource : NSObject
{
    NSMutableDictionary *_originSources;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _name;
}

@property(readonly, nonatomic) unsigned long long name; // @synthesize name=_name;
- (void)removeOrigin:(struct _MROrigin *)arg1;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (void)sendPackets:(id)arg1 forOrigin:(struct _MROrigin *)arg2;
- (void)dealloc;
- (id)initWithName:(unsigned long long)arg1;

@end

