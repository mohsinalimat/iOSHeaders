//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSLayoutConstraint.h>

@class NSString;

@interface RCContentSizeLayoutConstraint : NSLayoutConstraint
{
    id _autoitem;
    id _preferredContentSizeDidChangeObserver;
    _Bool _isConstantUpdatingConstraint;
    double _textStyleDefaultBodyLeading;
    _Bool _autoUpdatingConstantShrinks;
    double _defaultConstant;
    double _additionalConstant;
    NSString *_textStyle;
    CDUnknownBlockType _constantLoadingBlock;
}

+ (double)_maximumWidthOfStrings:(id)arg1 withFont:(id)arg2;
+ (id)baselineConstraintForView:(id)arg1 attribute:(long long)arg2 relation:(long long)arg3 toAutoitem:(id)arg4 defaultConstant:(double)arg5;
+ (id)baselineConstraintForAutoitem:(id)arg1 relation:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 defaultConstant:(double)arg5;
+ (id)constraintForAutoitem:(id)arg1 additionalConstant:(double)arg2 constantWidthSizingStringsLoadingBlock:(CDUnknownBlockType)arg3;
+ (id)constraintForAutoitem:(id)arg1 additionalConstant:(double)arg2 constantLoadingBlock:(CDUnknownBlockType)arg3;
+ (id)constraintForAutoitem:(id)arg1 constrainedItem:(id)arg2 attribute:(long long)arg3 relatedBy:(long long)arg4 toItem:(id)arg5 attribute:(long long)arg6 multiplier:(double)arg7 defaultConstant:(double)arg8;
+ (id)constraintForAutoitem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 defaultConstant:(double)arg7;
+ (id)_constraintForAutoitem:(id)arg1 constrainedItem:(id)arg2 attribute:(long long)arg3 relatedBy:(long long)arg4 toItem:(id)arg5 attribute:(long long)arg6 multiplier:(double)arg7 defaultConstant:(double)arg8 additionalConstant:(double)arg9 initialize:(_Bool)arg10;
@property(copy, nonatomic) CDUnknownBlockType constantLoadingBlock; // @synthesize constantLoadingBlock=_constantLoadingBlock;
@property(copy, nonatomic) NSString *textStyle; // @synthesize textStyle=_textStyle;
@property(nonatomic) double additionalConstant; // @synthesize additionalConstant=_additionalConstant;
@property(nonatomic) double defaultConstant; // @synthesize defaultConstant=_defaultConstant;
@property(nonatomic) _Bool autoUpdatingConstantShrinks; // @synthesize autoUpdatingConstantShrinks=_autoUpdatingConstantShrinks;
- (void).cxx_destruct;
- (void)_reloadPreferredContentSize:(_Bool)arg1;
- (void)_updatePreferredContentSize;
- (void)_forceUpdatePreferredContentSize;
- (double)_defaultConstantByFixingUpDefaultConstant:(double)arg1;
- (void)dealloc;

@end

