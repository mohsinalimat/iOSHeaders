//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDRep.h>

#import <TSReading/TSDTilingLayerDelegate-Protocol.h>

@class CALayer, NSString;

@interface TSWPEquationRep : TSDRep <TSDTilingLayerDelegate>
{
    CALayer *_equationLayer;
}

@property(retain, nonatomic) CALayer *equationLayer; // @synthesize equationLayer=_equationLayer;
- (struct CGRect)visibleBoundsForTilingLayer:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)drawInLayerContext:(struct CGContext *)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (struct CGRect)clipRect;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (void)screenScaleDidChange;
- (void)didUpdateLayer:(id)arg1;
- (_Bool)directlyManagesLayerContent;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (void)willBeRemoved;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

