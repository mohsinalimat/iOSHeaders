//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMGLView.h>

@class NSArray;

@interface CAMEffectsFullsizeView : CAMGLView
{
    NSArray *_selectedFilters;
    long long _selectedFilterType;
    long long _filterType;
}

@property long long filterType; // @synthesize filterType=_filterType;
- (void).cxx_destruct;
- (void)_renderWithInputImage:(id)arg1 ciContext:(id)arg2 mirrorRendering:(_Bool)arg3;
- (void)renderPixelBuffer:(struct __CVBuffer *)arg1 ciContext:(id)arg2 mirrorRendering:(_Bool)arg3;
- (id)_updateSelectedFilters;
- (void)setFixedSize:(struct CGSize)arg1;
- (void)_layoutGLLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

