//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCSingleTagFeedDescriptor.h>

@interface FCTestFeedDescriptor : FCSingleTagFeedDescriptor
{
    _Bool _disableGroupMerging;
    _Bool _disableFiltering;
    _Bool _enableSingletonGroups;
}

@property(nonatomic) _Bool enableSingletonGroups; // @synthesize enableSingletonGroups=_enableSingletonGroups;
@property(nonatomic) _Bool disableFiltering; // @synthesize disableFiltering=_disableFiltering;
@property(nonatomic) _Bool disableGroupMerging; // @synthesize disableGroupMerging=_disableGroupMerging;
- (id)feedGroupEmitters;
- (id)initWithContext:(id)arg1 identifier:(id)arg2 tag:(id)arg3;

@end

