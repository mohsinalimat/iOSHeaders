//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>

@class NSDate, NSDictionary, NSString, NSUUID, TIRollingLog;

@interface TITypologyLog : NSObject <NSCopying>
{
    NSUUID *_uuid;
    NSDate *_date;
    NSString *_systemVersion;
    NSString *_buildVersion;
    NSString *_clientIdentifier;
    NSDictionary *_config;
    TIRollingLog *_records;
    TIRollingLog *_traceLog;
}

@property(readonly, nonatomic) TIRollingLog *traceLog; // @synthesize traceLog=_traceLog;
@property(readonly, nonatomic) TIRollingLog *records; // @synthesize records=_records;
@property(retain, nonatomic) NSDictionary *config; // @synthesize config=_config;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(readonly, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)enumerateHumanReadableTraceEntriesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateRecordsWithBlock:(CDUnknownBlockType)arg1;
- (void)logToHumanReadableTrace:(id)arg1;
- (void)logRecord:(id)arg1;
- (id)recordSummary;
- (id)textSummary;
- (id)filename;
- (id)timestamp;
- (id)propertyList;
- (id)initWithPropertyList:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTypologyLog:(id)arg1;
- (id)init;
- (void)dealloc;

@end

