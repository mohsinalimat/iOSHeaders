//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVMkcolResponseItem : CoreDAVItem
{
    NSMutableSet *_propStats;
}

+ (id)copyParseRules;
@property(retain, nonatomic) NSMutableSet *propStats; // @synthesize propStats=_propStats;
- (_Bool)hasPropertyError;
- (void)addPropStat:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

