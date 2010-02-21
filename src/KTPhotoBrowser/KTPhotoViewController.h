//
//  KTPhotoViewController.h
//  KTPhotoBrowser
//
//  Created by Kirby Turner on 2/3/10.
//  Copyright 2010 White Peak Software Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class KTPhotoView;
@protocol KTPhotoBrowserDataSource;

@interface KTPhotoViewController : UIViewController {
   id <KTPhotoBrowserDataSource> dataSource_;
   NSInteger photoIndex_;
   KTPhotoView *imageView_;
   
   NSOperationQueue *queue_;
}

@property (nonatomic) NSInteger photoIndex;

- (id)initWithDataSource:(id <KTPhotoBrowserDataSource>)dataSource;

@end
