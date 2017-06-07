//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDPDataPoint-Protocol.h>

@class NSArray, NSDate, NSString;

@interface _CDPSimpleDataPoint : NSObject <_CDPDataPoint>
{
    _Bool _userIsSender;
    _Bool _userIsThreadInitiator;
    NSDate *_timestamp;
    NSArray *_peopleIdentifiers;
    NSString *_title;
}

@property(nonatomic) _Bool userIsThreadInitiator; // @synthesize userIsThreadInitiator=_userIsThreadInitiator;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *peopleIdentifiers; // @synthesize peopleIdentifiers=_peopleIdentifiers;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) _Bool userIsSender; // @synthesize userIsSender=_userIsSender;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

