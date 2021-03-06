//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class OADFill, OADStroke, OADTableCell3DProperties;

__attribute__((visibility("hidden")))
@interface OADTableCellProperties : NSObject
{
    OADStroke *mLeftStroke;
    OADStroke *mRightStroke;
    OADStroke *mTopStroke;
    OADStroke *mBottomStroke;
    OADStroke *mTopLeftToBottomRightStroke;
    OADStroke *mBottomLeftToTopRightStroke;
    OADTableCell3DProperties *mThreeDProperties;
    OADFill *mFill;
    float mLeftMargin;
    _Bool mIsLeftMarginOverridden;
    float mRightMargin;
    _Bool mIsRightMarginOverridden;
    float mTopMargin;
    _Bool mIsTopMarginOverridden;
    float mBottomMargin;
    _Bool mIsBottomMarginOverridden;
    unsigned char mTextFlow;
    _Bool mIsTextFlowOverridden;
    unsigned char mTextAnchor;
    _Bool mIsTextAnchorOverridden;
    _Bool mTextAnchorCenter;
    _Bool mIsTextAnchorCenterOverridden;
    unsigned char mTextHorizontalOverflow;
    _Bool mIsTextHorizontalOverflowOverridden;
}

- (id)description;
- (_Bool)isTextHorizontalOverflowOverridden;
- (void)setTextHorizontalOverflow:(unsigned char)arg1;
- (unsigned char)textHorizontalOverflow;
- (_Bool)isTextAnchorCenterOverridden;
- (void)setTextAnchorCenter:(_Bool)arg1;
- (_Bool)textAnchorCenter;
- (_Bool)isTextAnchorOverridden;
- (void)setTextAnchor:(unsigned char)arg1;
- (unsigned char)textAnchor;
- (_Bool)isTextFlowOverridden;
- (void)setTextFlow:(unsigned char)arg1;
- (unsigned char)textFlow;
- (_Bool)isBottomMarginOverridden;
- (void)setBottomMargin:(float)arg1;
- (float)bottomMargin;
- (_Bool)isTopMarginOverridden;
- (void)setTopMargin:(float)arg1;
- (float)topMargin;
- (_Bool)isRightMarginOverridden;
- (void)setRightMargin:(float)arg1;
- (float)rightMargin;
- (_Bool)isLeftMarginOverridden;
- (void)setLeftMargin:(float)arg1;
- (float)leftMargin;
- (void)setFill:(id)arg1;
- (id)fill;
- (void)setThreeDProperties:(id)arg1;
- (id)threeDProperties;
- (id)strokeNormalToDir:(int)arg1 bound:(int)arg2;
- (void)setBottomLeftToTopRightStroke:(id)arg1;
- (id)bottomLeftToTopRightStroke;
- (void)setTopLeftToBottomRightStroke:(id)arg1;
- (id)topLeftToBottomRightStroke;
- (void)setBottomStroke:(id)arg1;
- (id)bottomStroke;
- (void)setTopStroke:(id)arg1;
- (id)topStroke;
- (void)setRightStroke:(id)arg1;
- (id)rightStroke;
- (void)setLeftStroke:(id)arg1;
- (id)leftStroke;
- (void)setStrokeOfType:(int)arg1 toValue:(id)arg2;
- (id)stroke:(int)arg1;
- (void)dealloc;

@end

