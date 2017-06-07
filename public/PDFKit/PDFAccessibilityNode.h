//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

#import <PDFKit/NSCopying-Protocol.h>
#import <PDFKit/PDFAccessibilityNodeParent-Protocol.h>

@class NSArray, NSString, PDFAccessibilityNodePrivate, PDFPage;
@protocol PDFAccessibilityNodeParent;

@interface PDFAccessibilityNode : UIAccessibilityElement <NSCopying, PDFAccessibilityNodeParent>
{
    PDFAccessibilityNodePrivate *_private2;
}

+ (long long)_typeForCGPDFNode:(struct CGPDFNode *)arg1;
+ (void)_findClosestWordNodeForBounds:(struct CGRect)arg1 withLineNode:(id)arg2 withDistanceBetterThan:(double *)arg3 childOut:(id *)arg4;
+ (void)_findClosestLineNodeForBounds:(struct CGRect)arg1 withRootNode:(id)arg2 withDistanceBetterThan:(double *)arg3 parentOut:(id *)arg4 childOut:(id *)arg5;
+ (void)addPDFAnnotation:(id)arg1 toPDFAccessibilityNode:(id)arg2;
+ (void)_buildPDFAnnotationNodes:(id)arg1;
+ (Class)_nodeClassForNode:(struct CGPDFNode *)arg1;
+ (id)createPDFAccessibilityRootNode:(id)arg1;
- (void).cxx_destruct;
- (void)annotate:(id)arg1;
- (id)_stringForType;
- (void)_print:(id)arg1 isTail:(_Bool)arg2;
- (void)print;
- (void)buildAccessibilityHierarchy;
@property(nonatomic) long long type;
@property(nonatomic) struct CGRect bounds;
@property(retain, nonatomic) NSString *altText;
- (void)addChild:(id)arg1;
@property(readonly, nonatomic) NSArray *children;
- (void)setParent:(id)arg1;
@property(readonly, nonatomic) __weak id <PDFAccessibilityNodeParent> parent;
- (void)setNodeValue:(id)arg1;
@property(readonly, nonatomic) id nodeValue;
@property(nonatomic) __weak PDFPage *page;
@property(readonly, nonatomic) struct CGPDFNode *nodeRef;
- (struct CGRect)convertRectToAccessibilitySpace:(struct CGRect)arg1;
- (_Bool)supportsAppKitControls;
- (id)pageView;
- (id)document;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithParent:(id)arg1 nodeRef:(struct CGPDFNode *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
