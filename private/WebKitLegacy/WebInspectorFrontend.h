//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebInspectorFrontend : NSObject
{
    struct WebInspectorFrontendClient *m_frontendClient;
}

- (void)showConsole;
- (void)setTimelineProfilingEnabled:(_Bool)arg1;
- (_Bool)isTimelineProfilingEnabled;
- (void)stopProfilingJavaScript;
- (void)startProfilingJavaScript;
- (_Bool)isProfilingJavaScript;
- (void)setDebuggingEnabled:(_Bool)arg1;
- (_Bool)isDebuggingEnabled;
- (void)close;
- (void)detach;
- (void)attach;
- (id)initWithFrontendClient:(struct WebInspectorFrontendClient *)arg1;

@end

