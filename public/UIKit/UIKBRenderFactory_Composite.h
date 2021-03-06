//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIKBRenderFactoryiPhone.h>

@class UIKBRenderFactory;

__attribute__((visibility("hidden")))
@interface UIKBRenderFactory_Composite : UIKBRenderFactoryiPhone
{
    UIKBRenderFactory *_overlayFactory;
}

- (_Bool)isTallPopup;
- (double)popupFontSize;
- (struct CGPoint)popupSymbolTextOffset;
- (struct CGPoint)variantAnnotationTextOffset;
- (struct CGPoint)variantSymbolTextOffset;
- (struct UIEdgeInsets)variantSymbolFrameInsets;
- (struct UIEdgeInsets)variantPaddedFrameInsets;
- (struct UIEdgeInsets)wideShadowPopupMenuInsets;
- (struct UIEdgeInsets)wideShadowPaddleInsets;
- (id)initWithRenderingContext:(id)arg1 skipLayoutSegments:(_Bool)arg2;
- (Class)_overlayFactoryClass;

@end

