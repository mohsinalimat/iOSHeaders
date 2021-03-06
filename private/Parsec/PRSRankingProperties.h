//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Parsec/NSCopying-Protocol.h>
#import <Parsec/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface PRSRankingProperties : NSObject <NSSecureCoding, NSCopying>
{
    long long _totalUseCount;
    long long _outgoingCount;
    long long _incomingCount;
    NSString *_snippet;
    NSString *_keywords;
    NSString *_shortcut;
    NSString *_albumName;
    NSString *_alternateNames;
    NSDate *_lastUsedDate;
    NSString *_subject;
    NSString *_authors;
    NSString *_title;
    NSDate *_interestingDate;
    NSString *_recipients;
    NSString *_displayName;
    NSString *_artist;
    NSString *_namedLocation;
    NSString *_organizations;
    long long _launchCountLastYear;
    long long _launchCountLastMonth;
    long long _launchCountLastWeek;
    long long _launchCountLastDay;
    NSString *_authorEmail;
    long long _incomingVideoCallsLastYear;
    long long _incomingVideoCallsLastMonth;
    long long _incomingVideoCallsLastWeek;
    long long _incomingVideoCallsLastDay;
    long long _outgoingVideoCallsLastYear;
    long long _outgoingVideoCallsLastMonth;
    long long _outgoingVideoCallsLastWeek;
    long long _outgoingVideoCallsLastDay;
    long long _incomingAudioCallsLastYear;
    long long _incomingAudioCallsLastMonth;
    long long _incomingAudioCallsLastWeek;
    long long _incomingAudioCallsLastDay;
    long long _outgoingAudioCallsLastYear;
    long long _outgoingAudioCallsLastMonth;
    long long _outgoingAudioCallsLastWeek;
    long long _outgoingAudioCallsLastDay;
    long long _numFieldsMatched;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long numFieldsMatched; // @synthesize numFieldsMatched=_numFieldsMatched;
@property(nonatomic) long long outgoingAudioCallsLastDay; // @synthesize outgoingAudioCallsLastDay=_outgoingAudioCallsLastDay;
@property(nonatomic) long long outgoingAudioCallsLastWeek; // @synthesize outgoingAudioCallsLastWeek=_outgoingAudioCallsLastWeek;
@property(nonatomic) long long outgoingAudioCallsLastMonth; // @synthesize outgoingAudioCallsLastMonth=_outgoingAudioCallsLastMonth;
@property(nonatomic) long long outgoingAudioCallsLastYear; // @synthesize outgoingAudioCallsLastYear=_outgoingAudioCallsLastYear;
@property(nonatomic) long long incomingAudioCallsLastDay; // @synthesize incomingAudioCallsLastDay=_incomingAudioCallsLastDay;
@property(nonatomic) long long incomingAudioCallsLastWeek; // @synthesize incomingAudioCallsLastWeek=_incomingAudioCallsLastWeek;
@property(nonatomic) long long incomingAudioCallsLastMonth; // @synthesize incomingAudioCallsLastMonth=_incomingAudioCallsLastMonth;
@property(nonatomic) long long incomingAudioCallsLastYear; // @synthesize incomingAudioCallsLastYear=_incomingAudioCallsLastYear;
@property(nonatomic) long long outgoingVideoCallsLastDay; // @synthesize outgoingVideoCallsLastDay=_outgoingVideoCallsLastDay;
@property(nonatomic) long long outgoingVideoCallsLastWeek; // @synthesize outgoingVideoCallsLastWeek=_outgoingVideoCallsLastWeek;
@property(nonatomic) long long outgoingVideoCallsLastMonth; // @synthesize outgoingVideoCallsLastMonth=_outgoingVideoCallsLastMonth;
@property(nonatomic) long long outgoingVideoCallsLastYear; // @synthesize outgoingVideoCallsLastYear=_outgoingVideoCallsLastYear;
@property(nonatomic) long long incomingVideoCallsLastDay; // @synthesize incomingVideoCallsLastDay=_incomingVideoCallsLastDay;
@property(nonatomic) long long incomingVideoCallsLastWeek; // @synthesize incomingVideoCallsLastWeek=_incomingVideoCallsLastWeek;
@property(nonatomic) long long incomingVideoCallsLastMonth; // @synthesize incomingVideoCallsLastMonth=_incomingVideoCallsLastMonth;
@property(nonatomic) long long incomingVideoCallsLastYear; // @synthesize incomingVideoCallsLastYear=_incomingVideoCallsLastYear;
@property(retain, nonatomic) NSString *authorEmail; // @synthesize authorEmail=_authorEmail;
@property(nonatomic) long long launchCountLastDay; // @synthesize launchCountLastDay=_launchCountLastDay;
@property(nonatomic) long long launchCountLastWeek; // @synthesize launchCountLastWeek=_launchCountLastWeek;
@property(nonatomic) long long launchCountLastMonth; // @synthesize launchCountLastMonth=_launchCountLastMonth;
@property(nonatomic) long long launchCountLastYear; // @synthesize launchCountLastYear=_launchCountLastYear;
@property(retain, nonatomic) NSString *organizations; // @synthesize organizations=_organizations;
@property(retain, nonatomic) NSString *namedLocation; // @synthesize namedLocation=_namedLocation;
@property(retain, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *recipients; // @synthesize recipients=_recipients;
@property(retain, nonatomic) NSDate *interestingDate; // @synthesize interestingDate=_interestingDate;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *authors; // @synthesize authors=_authors;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSDate *lastUsedDate; // @synthesize lastUsedDate=_lastUsedDate;
@property(retain, nonatomic) NSString *alternateNames; // @synthesize alternateNames=_alternateNames;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) NSString *shortcut; // @synthesize shortcut=_shortcut;
@property(retain, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSString *snippet; // @synthesize snippet=_snippet;
@property(nonatomic) long long incomingCount; // @synthesize incomingCount=_incomingCount;
@property(nonatomic) long long outgoingCount; // @synthesize outgoingCount=_outgoingCount;
@property(nonatomic) long long totalUseCount; // @synthesize totalUseCount=_totalUseCount;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

