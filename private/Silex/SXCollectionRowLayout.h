//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SXCollectionRowLayout : NSObject
{
    unsigned long long _intendedComponentsPerRow;
    unsigned long long _componentsPerRow;
    double _leftMargin;
    double _rightMargin;
    double _componentWidth;
    double _spaceBetweenComponents;
}

@property(nonatomic) double spaceBetweenComponents; // @synthesize spaceBetweenComponents=_spaceBetweenComponents;
@property(nonatomic) double componentWidth; // @synthesize componentWidth=_componentWidth;
@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(nonatomic) unsigned long long componentsPerRow; // @synthesize componentsPerRow=_componentsPerRow;
@property(nonatomic) unsigned long long intendedComponentsPerRow; // @synthesize intendedComponentsPerRow=_intendedComponentsPerRow;
- (id)description;

@end

