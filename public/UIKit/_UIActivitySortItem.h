//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIActivity;

__attribute__((visibility("hidden")))
@interface _UIActivitySortItem : NSObject
{
    UIActivity *_activity;
    long long _group;
    id _orderingValueWithinGroup;
}

+ (id)descriptorForActivity:(id)arg1 group:(long long)arg2 orderingValueWithinGroup:(id)arg3;
@property(readonly, nonatomic) id orderingValueWithinGroup; // @synthesize orderingValueWithinGroup=_orderingValueWithinGroup;
@property(readonly, nonatomic) long long group; // @synthesize group=_group;
@property(readonly, nonatomic) UIActivity *activity; // @synthesize activity=_activity;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)debugDescription;

@end

