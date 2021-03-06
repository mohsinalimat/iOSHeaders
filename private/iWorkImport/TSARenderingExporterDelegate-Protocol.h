//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSURL;

@protocol TSARenderingExporterDelegate
- (_Bool)supportsRenderingQuality;
- (_Bool)supportsPaging;
- (void)releaseCGContext:(struct CGContext *)arg1;
- (struct CGContext *)newCGContextForURL:(NSURL *)arg1;
- (double)viewScale;
- (void)teardown;
- (void)setup;

@optional
- (int)renderingQuality;
@end

