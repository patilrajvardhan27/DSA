{
if(p)
{
printf("%d ",p->data);
Preorder(p->lchild);
Preorder(p->rchild);
}
}