//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>
#import <UIKit/NSItemProviderReading-Protocol.h>
#import <UIKit/NSItemProviderWriting-Protocol.h>
#import <UIKit/NSSecureCoding-Protocol.h>
#import <UIKit/UIItemProviderReading-Protocol.h>
#import <UIKit/UIItemProviderWriting-Protocol.h>

@class CIColor, NSArray, NSString;

@interface UIColor : NSObject <NSItemProviderReading, NSItemProviderWriting, UIItemProviderReading, UIItemProviderWriting, NSSecureCoding, NSCopying>
{
    NSString *_systemColorName;
    NSString *_cachedStyleString;
}

+ (double)_luminanceWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
+ (id)textFieldAtomBlueColor;
+ (id)__halfTransparentWhiteColor;
+ (id)__halfTransparentBlackColor;
+ (id)tableCellDefaultSelectionTintColor;
+ (id)infoTextOverPinStripeTextColor;
+ (id)textFieldAtomPurpleColor;
+ (id)tableCellGrayTextColor;
+ (id)tableCellValue2BlueColor;
+ (id)tableCellValue1BlueColor;
+ (id)sectionHeaderBorderColor;
+ (id)sectionHeaderOpaqueBackgroundColor;
+ (id)sectionHeaderBackgroundColor;
+ (id)sectionListBorderColor;
+ (id)tableGroupedTopShadowColor;
+ (id)tableShadowColor;
+ (id)tableSelectionGradientEndColor;
+ (id)tableSelectionGradientStartColor;
+ (id)tableSelectionColor;
+ (id)tablePlainHeaderFooterFloatingBackgroundColor;
+ (id)tablePlainHeaderFooterBackgroundColor;
+ (id)tableCellbackgroundColorCarPlay;
+ (id)tableCellBackgroundColor;
+ (id)tableCellGroupedBackgroundColorLegacyWhite;
+ (id)tableCellPlainBackgroundColor;
+ (id)tableBackgroundColor;
+ (id)brownColor;
+ (id)purpleColor;
+ (id)orangeColor;
+ (id)magentaColor;
+ (id)yellowColor;
+ (id)cyanColor;
+ (id)blueColor;
+ (id)greenColor;
+ (id)redColor;
+ (id)clearColor;
+ (id)grayColor;
+ (id)whiteColor;
+ (id)lightGrayColor;
+ (id)darkGrayColor;
+ (id)blackColor;
+ (id)classFallbacksForKeyedArchiver;
+ (_Bool)supportsSecureCoding;
+ (id)_accessibilityDarkenedColorForColor:(id)arg1;
+ (id)_composedColorFromSourceColor:(id)arg1 destinationColor:(id)arg2 tintColor:(id)arg3 alpha:(double)arg4;
+ (id)_systemColorForColor:(id)arg1 withName:(id)arg2;
+ (id)_systemColorWithName:(id)arg1;
+ (id)colorWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithCIColor:(id)arg1;
+ (id)colorWithPatternImage:(id)arg1;
+ (id)_disambiguated_due_to_CIImage_colorWithCGColor:(struct CGColor *)arg1;
+ (id)colorWithCGColor:(struct CGColor *)arg1;
+ (id)_disambiguated_due_to_CIImage_colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (id)scrollViewTexturedBackgroundColor;
+ (id)underPageBackgroundColor;
+ (id)viewFlipsideBackgroundColor;
+ (id)tableCellBlueTextColor;
+ (id)tableGroupedSeparatorLightColor;
+ (id)tableSeparatorLightColor;
+ (id)tableSeparatorDarkColor;
+ (id)tableCellGroupedBackgroundColor;
+ (id)groupTableViewBackgroundColor;
+ (id)_markedTextBorderColor;
+ (id)_markedTextBackgroundColor;
+ (id)darkTextColor;
+ (id)lightTextColor;
+ (id)selectionGrabberColor;
+ (id)insertionPointColor;
+ (id)selectionHighlightColor;
+ (id)pinStripeColor;
+ (id)externalSystemGreenColor;
+ (id)externalSystemRedColor;
+ (id)externalSystemTealColor;
+ (id)systemDarkPinkColor;
+ (id)systemDarkTealColor;
+ (id)systemDarkYellowColor;
+ (id)systemDarkOrangeColor;
+ (id)systemDarkBlueColor;
+ (id)systemDarkGreenColor;
+ (id)systemDarkRedColor;
+ (id)systemPurpleColor;
+ (id)systemMidGrayColor;
+ (id)systemGrayColor;
+ (id)systemPinkColor;
+ (id)systemTealColor;
+ (id)systemYellowColor;
+ (id)systemOrangeColor;
+ (id)systemBlueColor;
+ (id)systemGreenColor;
+ (id)systemRedColor;
+ (id)_webContentBackgroundColor;
+ (id)_vibrantLightSectionDelimiterDividerDarkeningColor;
+ (id)_vibrantLightSectionDelimiterDividerBurnColor;
+ (id)_vibrantDarkFillDodgeColor;
+ (id)_vibrantLightFillDarkeningColor;
+ (id)_vibrantLightFillBurnColor;
+ (id)_vibrantLightDividerDarkeningColor;
+ (id)_vibrantLightDividerBurnColor;
+ (id)_systemSelectedColor;
+ (id)_externalBarBackgroundColor;
+ (id)_grayColorForFontSize:(double)arg1;
+ (id)_alternateSystemInteractionTintColor;
+ (id)_dimmingViewColor;
+ (id)_translucentPaperTextureColor;
+ (id)noContentDarkGradientBackgroundColor;
+ (id)noContentLightGradientBackgroundColor;
+ (id)_accessibilityButtonShapesNoBlendModeBackgroundColorOnDark;
+ (id)_accessibilityButtonShapesNoBlendModeBackgroundColorOnLight;
+ (id)_accessibilityButtonShapesDisabledBackgroundColorOnDark;
+ (id)_accessibilityButtonShapesBackgroundColorOnDark;
+ (id)_accessibilityButtonShapesBackgroundColorOnLight;
+ (id)_externalSystemSuperDarkGrayColor;
+ (id)_externalSystemExtraDarkGrayColor;
+ (id)_externalSystemDarkGrayColor;
+ (id)_externalSystemGrayColor;
+ (id)_externalSystemMidGrayColor;
+ (id)_externalSystemWhiteColor;
+ (id)_systemMidGrayTintColor;
+ (id)_barStyleBlackHairlineShadowColor;
+ (id)_barHairlineShadowColor;
+ (id)_systemDestructiveTintColor;
+ (id)_systemInteractionTintColor;
+ (id)colorNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3;
+ (id)colorNamed:(id)arg1;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)newObjectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
- (id)_colorBlendedWithColors:(id)arg1;
- (id)_colorBlendedWithColor:(id)arg1;
- (id)_colorBlendedWithColor:(id)arg1 compositingFilter:(id)arg2;
- (double)_luminanceDifferenceFromColor:(id)arg1;
- (double)_luminance;
- (double)_colorDifferenceFromColor:(id)arg1;
- (_Bool)_isSimilarToColor:(id)arg1 withinPercentage:(double)arg2;
@property(retain, nonatomic, getter=_systemColorName, setter=_setSystemColorName:) NSString *systemColorName;
- (_Bool)_isDeepColor;
- (_Bool)isPatternColor;
- (id)styleString;
- (double)alphaComponent;
- (struct CGColor *)cgColor;
- (_Bool)_getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (_Bool)_getWhite:(double *)arg1 alpha:(double *)arg2;
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (_Bool)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;
- (_Bool)getWhite:(double *)arg1 alpha:(double *)arg2;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) CIColor *CIColor;
@property(readonly, nonatomic) struct CGColor *CGColor;
- (id)colorWithAlphaComponent:(double)arg1;
- (void)setStroke;
- (void)setFill;
- (void)set;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)initWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithCIColor:(id)arg1;
- (id)initWithPatternImage:(id)arg1;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (id)_ui_swipeActionHighlightedColor;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
- (void)registerLoadHandlersToItemProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

