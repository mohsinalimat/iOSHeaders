//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSCoding-Protocol.h>
#import <UIKit/NSCopying-Protocol.h>

@class UICubicTimingParameters, UISpringTimingParameters;

@protocol UITimingCurveProvider <NSCoding, NSCopying>
@property(readonly, nonatomic) UISpringTimingParameters *springTimingParameters;
@property(readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters;
@property(readonly, nonatomic) long long timingCurveType;
@end

