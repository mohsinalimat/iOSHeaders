//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CVML/CVMLDetector.h>

@interface CVMLRectangleDetector : CVMLDetector
{
    float *_perMeshPtr;
}

- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end

