//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGraphicsRendererContext.h>

@interface UIGraphicsPDFRendererContext : UIGraphicsRendererContext
{
    _Bool _inPage;
    struct CGRect _documentBounds;
    struct CGRect _pageBounds;
}

@property _Bool inPage; // @synthesize inPage=_inPage;
@property struct CGRect pageBounds; // @synthesize pageBounds=_pageBounds;
@property struct CGRect documentBounds; // @synthesize documentBounds=_documentBounds;
- (void)setDestinationWithName:(id)arg1 forRect:(struct CGRect)arg2;
- (void)addDestinationWithName:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)setURL:(id)arg1 forRect:(struct CGRect)arg2;
@property(readonly, nonatomic) struct CGRect pdfContextBounds;
- (void)beginPageWithBounds:(struct CGRect)arg1 pageInfo:(id)arg2;
- (void)beginPage;
- (void)updateAuxInfo:(id)arg1;

@end

