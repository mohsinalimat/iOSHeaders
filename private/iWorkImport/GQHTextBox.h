//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/GQHParagraphStyle.h>

__attribute__((visibility("hidden")))
@interface GQHTextBox : GQHParagraphStyle
{
}

+ (int)outputInnerSandbagsForFrame:(struct CGRect)arg1 drawable:(id)arg2 state:(id)arg3;
+ (_Bool)outputWrapSandbagsForFrame:(struct CGRect)arg1 columnCount:(int)arg2 drawable:(id)arg3 state:(id)arg4 isPageFrame:(_Bool)arg5;
+ (int)outputWrapSandbagsForFrame:(struct CGRect)arg1 columnCount:(int)arg2 drawable:(id)arg3 state:(id)arg4;
+ (void)createExternalWrapSandbagStyles:(id)arg1;
+ (void)mapScaledImageFill:(id)arg1 style:(id)arg2 size:(struct CGSize)arg3;
+ (_Bool)styleNeedsImageFillMapping:(id)arg1;
+ (void)mapLayout:(id)arg1 style:(id)arg2 state:(id)arg3;
+ (const char *)name;
+ (int)handleLayoutStorage:(id)arg1 state:(id)arg2;
+ (int)handleShapeText:(id)arg1 boundsRect:(struct CGRect)arg2 floating:(_Bool)arg3 state:(id)arg4;
+ (void)mapStyle:(id)arg1 style:(id)arg2 state:(id)arg3;
+ (int)outputWrapSandbagsForShape:(id)arg1 layoutStyle:(id)arg2 state:(id)arg3;
+ (int)outputInnerSandbagsForShape:(id)arg1 layoutStyle:(id)arg2 state:(id)arg3;
+ (void)outputSandbag:(id)arg1 state:(id)arg2;

@end

