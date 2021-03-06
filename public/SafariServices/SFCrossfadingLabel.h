//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface SFCrossfadingLabel : UILabel
{
    double _fromHue;
    double _fromSaturation;
    double _fromBrightness;
    UIColor *_fromColor;
    long long _mode;
    double _progress;
}

@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) UIColor *fromColor; // @synthesize fromColor=_fromColor;
- (void).cxx_destruct;
- (void)_updateCrossfade;

@end

