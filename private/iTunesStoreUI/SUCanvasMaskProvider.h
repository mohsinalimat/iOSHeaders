//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUMaskProvider.h>

@class SUScriptCanvasFunction;

@interface SUCanvasMaskProvider : SUMaskProvider
{
    SUScriptCanvasFunction *_function;
}

- (struct CGPath *)copyPathForMaskWithSize:(struct CGSize)arg1;
- (id)copyMaskImageWithSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFunction:(id)arg1;

@end

