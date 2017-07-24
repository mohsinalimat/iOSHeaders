//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSDGLLayerContext-Protocol.h>

@class EAGLContext, NSString;

__attribute__((visibility("hidden")))
@interface TSDGLLayerContext : NSObject <TSDGLLayerContext>
{
    EAGLContext *_context;
    unsigned int _renderbuffer;
    unsigned int _framebuffer;
}

- (void)unlock;
- (void)lock;
- (void)presentRenderbuffer;
- (void)teardown;
- (_Bool)createFramebufferFromLayer:(id)arg1;
- (id)initWithSharedContext:(id)arg1;
- (id)init;
- (id)glContext;
- (_Bool)makeCurrentContext;
- (_Bool)isValid;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

