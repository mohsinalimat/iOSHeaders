//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSKFormat : NSObject <NSCopying>
{
    int _formatType;
}

+ (id)formatFromArchive:(const struct FormatStructArchive *)arg1;
+ (unsigned int)validatedDecimalPlaces:(unsigned long long)arg1;
+ (id)defaultFormatWithFormatType:(int)arg1 locale:(id)arg2;
+ (id)booleanFormat;
+ (id)checkboxFormat;
+ (id)ratingFormat;
+ (id)textFormat;
+ (id)formatFromTSUFormatStruct:(CDStruct_28403e59)arg1;
+ (id)defaultRootFormatForCustomFormatType:(int)arg1;
@property(readonly, nonatomic) int formatType; // @synthesize formatType=_formatType;
- (void)encodeToArchive:(struct FormatStructArchive *)arg1;
- (id)description;
- (id)asMultipleChoiceListFormat;
- (id)asStepperSliderFormat;
- (id)asCustomFormatWrapper;
- (id)asDurationFormat;
- (id)asDateTimeFormat;
- (id)asBaseFormat;
- (id)asFractionFormat;
- (id)asCurrencyFormat;
- (id)asNumberFormat;
- (id)stringFromDurationTimeInterval:(double)arg1 locale:(id)arg2;
- (id)stringFromBool:(_Bool)arg1 locale:(id)arg2;
- (id)stringFromDate:(id)arg1 locale:(id)arg2;
- (id)stringFromString:(id)arg1 locale:(id)arg2;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2;
- (_Bool)hasSimpleFormatType;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFormatType:(int)arg1;
@property(readonly, nonatomic) CDStruct_28403e59 formatStruct;

@end

