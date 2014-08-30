//
//  DetailViewController.h
//  5d capture
//
//  Created by Alex on 8/29/14.
//  Copyright (c) 2014 Alex. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

