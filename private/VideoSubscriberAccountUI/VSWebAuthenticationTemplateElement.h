//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKViewElement.h>

@class VSMessagePortFeature;

__attribute__((visibility("hidden")))
@interface VSWebAuthenticationTemplateElement : IKViewElement
{
    VSMessagePortFeature *_messagePort;
}

+ (id)supportedFeatures;
@property(readonly, nonatomic) VSMessagePortFeature *messagePort; // @synthesize messagePort=_messagePort;
- (void).cxx_destruct;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

