//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDMarker : NSObject
{
    unsigned int mSize;
    int mStyle;
    OADGraphicProperties *mGraphicProperties;
}

- (id)description;
- (void)setSize:(unsigned int)arg1;
- (unsigned int)size;
- (void)setGraphicProperties:(id)arg1;
- (id)graphicProperties;
- (void)setStyle:(int)arg1;
- (int)style;
- (void)dealloc;
- (id)init;

@end

