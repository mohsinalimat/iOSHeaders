//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSDate, NSNumber;

@interface SAPhoneSearch : SADomainCommand
{
}

+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)search;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSNumber *voiceMail;
@property(copy, nonatomic) NSDate *start;
@property(copy, nonatomic) NSNumber *outgoing;
@property(copy, nonatomic) NSNumber *missed;
@property(copy, nonatomic) NSNumber *last;
@property(copy, nonatomic) NSNumber *isNew;
@property(copy, nonatomic) NSNumber *faceTimeAudio;
@property(copy, nonatomic) NSNumber *faceTime;
@property(copy, nonatomic) NSDate *end;
@property(copy, nonatomic) NSArray *contacts;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

