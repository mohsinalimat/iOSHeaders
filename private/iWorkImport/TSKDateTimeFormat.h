//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKFormat.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSKDateTimeFormat : TSKFormat <NSCopying>
{
    NSString *_formatString;
}

+ (id)nowFormatForLocale:(id)arg1;
+ (id)todayFormatForLocale:(id)arg1;
@property(readonly, nonatomic) NSString *formatString; // @synthesize formatString=_formatString;
- (void).cxx_destruct;
- (id)asDateTimeFormat;
- (id)stringFromDate:(id)arg1 locale:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithFormatString:(id)arg1;
- (id)initWithLocale:(id)arg1;
- (id)initWithFormatType:(int)arg1;
@property(readonly, nonatomic) _Bool formatStringContainsOnlyDate;

@end

