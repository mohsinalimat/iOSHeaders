//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AKController;

__attribute__((visibility("hidden")))
@interface MUContentViewController : UIViewController
{
    AKController *_annotationController;
}

@property(readonly) __weak AKController *annotationController; // @synthesize annotationController=_annotationController;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithAnnotationController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 annotationController:(id)arg3;

@end

