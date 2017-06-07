//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FitnessUI/FIUIChartAxisDescriptor-Protocol.h>

@class NSNumber, NSString, UIColor, UIFont;

@interface FIUIChartMinMaxValueAxisDescriptor : NSObject <FIUIChartAxisDescriptor>
{
    UIFont *_labelFont;
    UIColor *_unhighlightedLabelColor;
    UIColor *_highlightedSubLabelColor;
    double _axisDescriptorPadding;
    NSNumber *_minValue;
    NSNumber *_maxValue;
}

@property(retain, nonatomic) NSNumber *maxValue; // @synthesize maxValue=_maxValue;
@property(retain, nonatomic) NSNumber *minValue; // @synthesize minValue=_minValue;
@property(nonatomic) double axisDescriptorPadding; // @synthesize axisDescriptorPadding=_axisDescriptorPadding;
@property(retain, nonatomic) UIColor *highlightedSubLabelColor; // @synthesize highlightedSubLabelColor=_highlightedSubLabelColor;
@property(retain, nonatomic) UIColor *unhighlightedLabelColor; // @synthesize unhighlightedLabelColor=_unhighlightedLabelColor;
@property(retain, nonatomic) UIFont *labelFont; // @synthesize labelFont=_labelFont;
- (void).cxx_destruct;
- (Class)expectedDataType;
- (id)axisLabels;
- (id)_axisLabelForValue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hideClippedLabels;
@property(retain, nonatomic) UIColor *highlightedLabelColor;
@property(nonatomic) unsigned long long labelAlignment;
@property(retain, nonatomic) UIColor *selectedLabelColor;
@property(nonatomic) double subAxisDescriptorPadding;
@property(retain, nonatomic) UIFont *subLabelFont;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIColor *unhighlightedSubLabelColor;

@end
