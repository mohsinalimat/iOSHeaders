//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray;

@interface TLVibrationPattern : NSObject
{
    NSDictionary *_propertyListRepresentation;
    NSMutableArray *_complexPatternDescription;
    id _contextObject;
}

+ (id)noneVibrationPattern;
+ (id)complexVibrationPatternWithDurationsForVibrationsAndPauses:(double)arg1;
+ (id)simpleVibrationPatternWithVibrationDuration:(double)arg1 pauseDuration:(double)arg2;
+ (_Bool)isValidVibrationPatternPropertyListRepresentation:(id)arg1;
@property(retain, nonatomic) id contextObject; // @synthesize contextObject=_contextObject;
- (void).cxx_destruct;
- (void)appendVibrationComponentWithDuration:(double)arg1 isPause:(_Bool)arg2;
- (double)_computedDuration;
@property(readonly, nonatomic) id _artificiallyRepeatingPropertyListRepresentation;
@property(readonly, nonatomic) id propertyListRepresentation;
- (id)_initWithPropertyListRepresentation:(id)arg1 skipValidation:(_Bool)arg2;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)init;

@end

