//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSValue;

__attribute__((visibility("hidden")))
@interface _UIBarBackButtonItemAppearanceStorage : NSObject
{
    NSMutableDictionary *backgroundImages;
    NSMutableDictionary *miniBackgroundImages;
    NSValue *titlePositionOffset;
    NSValue *miniTitlePositionOffset;
    NSMutableDictionary *backgroundVerticalAdjustmentsForBarMetrics;
}

@property(retain, nonatomic) NSValue *miniTitlePositionOffset; // @synthesize miniTitlePositionOffset;
@property(retain, nonatomic) NSValue *titlePositionOffset; // @synthesize titlePositionOffset;
- (void).cxx_destruct;
- (double)backgroundVerticalAdjustmentForBarMetrics:(long long)arg1;
- (void)setBackgroundVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (id)anyBackgroundImage;
- (id)backgroundImageForState:(unsigned long long)arg1 isMini:(_Bool)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 isMini:(_Bool)arg3;

@end

