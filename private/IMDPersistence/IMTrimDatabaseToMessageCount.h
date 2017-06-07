//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMDPersistence/IMAbstractDatabaseTrimmer.h>

@interface IMTrimDatabaseToMessageCount : IMAbstractDatabaseTrimmer
{
    long long _messageCount;
}

@property(readonly, nonatomic) long long messageCount; // @synthesize messageCount=_messageCount;
- (void)performMessageSelectionWithOperation:(struct IMDSqlOperation *)arg1;
- (id)initWithSourceDatabasePath:(id)arg1 destinationDatabasePath:(id)arg2 messageCount:(long long)arg3;

@end

