//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCJobIdentifying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCItemDBRowIDJobIdentifier : NSObject <BRCJobIdentifying>
{
    long long _itemDBRowID;
}

@property(readonly, nonatomic) long long itemDBRowID; // @synthesize itemDBRowID=_itemDBRowID;
- (id)columnsValues;
- (id)columns;
- (id)matchingJobsWhereSQLClause;
@property(readonly, copy) NSString *description;
- (id)jobsDescription;
- (id)initWithItemDBRowID:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
