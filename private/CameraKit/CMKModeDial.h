//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAGradientLayer, NSArray, NSDictionary, UIView;
@protocol CMKModeDialDataSource;

@interface CMKModeDial : UIControl
{
    long long _orientation;
    id <CMKModeDialDataSource> _dataSource;
    long long _selectedMode;
    NSArray *__modes;
    NSDictionary *__items;
    UIView *__meshTransformView;
    CAGradientLayer *__maskLayer;
    UIView *__itemsContainerView;
}

@property(readonly, nonatomic) UIView *_itemsContainerView; // @synthesize _itemsContainerView=__itemsContainerView;
@property(readonly, nonatomic) CAGradientLayer *_maskLayer; // @synthesize _maskLayer=__maskLayer;
@property(readonly, nonatomic) UIView *_meshTransformView; // @synthesize _meshTransformView=__meshTransformView;
@property(retain, nonatomic, setter=_setItems:) NSDictionary *_items; // @synthesize _items=__items;
@property(retain, nonatomic, setter=_setModes:) NSArray *_modes; // @synthesize _modes=__modes;
@property(nonatomic) long long selectedMode; // @synthesize selectedMode=_selectedMode;
@property(nonatomic) id <CMKModeDialDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) long long orientation; // @synthesize orientation=_orientation;
- (void).cxx_destruct;
- (void)updateToContentSize:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_configureMeshTransformForOrientation:(long long)arg1;
- (id)_meshTransformForOrientation:(long long)arg1;
- (id)_verticalMeshTransform;
- (id)_horizontalMeshTransform;
- (void)_configureMaskForOrientation:(long long)arg1;
- (void)reloadData;
- (id)_selectedItem;
- (id)_font;
- (id)_titleForMode:(long long)arg1;
- (void)_updateContainerOriginFromSelectedMode;
- (struct CGPoint)_verticalContainerOriginForMode:(long long)arg1;
- (struct CGPoint)_horizontalContainerOriginForMode:(long long)arg1;
- (double)_centeringNudgeForMode:(long long)arg1;
- (void)setSelectedMode:(long long)arg1 animated:(_Bool)arg2;
- (void)_layoutVerticalModeDial;
- (void)_layoutHorizontalModeDial;
- (struct CGSize)_interpolatedHorizontalMeshTransformSize;
- (void)layoutSubviews;
- (id)initWithOrientation:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonCMKModeDialInitializationWithOrientation:(long long)arg1;

@end

