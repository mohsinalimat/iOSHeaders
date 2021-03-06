//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CommonUtilities/NSCopying-Protocol.h>
#import <CommonUtilities/NSSecureCoding-Protocol.h>

@class NSString;

@interface CUTCheckpoint : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _frozen;
    _Bool _assertsUseAfterFreeze;
    _Bool _shouldLogTouches;
    NSString *_name;
    NSString *_uniqueIdentifier;
}

+ (id)_reportDateFormatter;
+ (id)_whitelistedClasses;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool shouldLogTouches; // @synthesize shouldLogTouches=_shouldLogTouches;
@property(nonatomic) _Bool assertsUseAfterFreeze; // @synthesize assertsUseAfterFreeze=_assertsUseAfterFreeze;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)_reportEndDate;
- (id)_reportStartDate;
- (id)_reportName;
- (id)_reportMetadata;
- (void)_appendReportToMutableString:(id)arg1 indentation:(long long)arg2 paddedNameLength:(long long)arg3;
- (id)report;
- (id)_freezeBacktrace;
- (_Bool)_assertNotFrozen;
- (_Bool)isFrozen;
- (void)_freeze;
- (void)freeze;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2;

@end

