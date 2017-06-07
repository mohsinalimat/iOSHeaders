//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ODDPointPropertySet : NSObject
{
    NSString *mLayoutTypeId;
    NSString *mPresentationName;
    NSString *mPresentationStyleLabel;
    int mPresentationStyleIndex;
    int mPresentationStyleCount;
    NSObject *mPresentationAssociatedId;
    _Bool mCustomVerticalFlip;
    double mCustomScaleX;
    double mCustomScaleY;
    double mCustomOffsetX;
    double mCustomOffsetY;
}

- (void)setCustomOffsetY:(double)arg1;
- (double)customOffsetY;
- (void)setCustomOffsetX:(double)arg1;
- (double)customOffsetX;
- (void)setCustomScaleY:(double)arg1;
- (double)customScaleY;
- (void)setCustomScaleX:(double)arg1;
- (double)customScaleX;
- (id)description;
- (void)setCustomVerticalFlip:(_Bool)arg1;
- (_Bool)customVerticalFlip;
- (void)setPresentationAssociatedId:(id)arg1;
- (id)presentationAssociatedId;
- (void)setPresentationStyleCount:(int)arg1;
- (int)presentationStyleCount;
- (void)setPresentationStyleIndex:(int)arg1;
- (int)presentationStyleIndex;
- (void)setPresentationStyleLabel:(id)arg1;
- (id)presentationStyleLabel;
- (void)setPresentationName:(id)arg1;
- (id)presentationName;
- (void)setLayoutTypeId:(id)arg1;
- (id)layoutTypeId;
- (void)dealloc;

@end

